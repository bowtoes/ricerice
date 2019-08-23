/** @Copyright 2015 seancode */

#ifndef WORLDINFO_H_
#define WORLDINFO_H_

#include <QObject>
#include <QHash>
#include <QSharedPointer>
#include <QJsonArray>
#include <QJsonObject>

class TileInfo : public QObject {
  Q_OBJECT

 public:
  struct MergeBlend {
    bool hasTile;
    qint16 tile;
    quint32 mask;
    bool blend;
    bool recursive;
    quint8 direction;
  };

  explicit TileInfo(QJsonObject const &json);
  TileInfo(QJsonObject const &json, TileInfo const &parent);
  QString name;
  quint32 color;
  double lightR, lightG, lightB;
  quint32 mask;
  bool solid, transparent, dirt, stone, grass, pile, flip,
       brick, merge, large;
  QList<MergeBlend> blends;
  int width, height, skipy, toppad;
  int u, v, minu, maxu, minv, maxv;
  bool isHilighting;
  QList<QSharedPointer<TileInfo>> variants;
};
Q_DECLARE_METATYPE(QSharedPointer<TileInfo>)

class WorldInfo : public QObject {
  Q_OBJECT

 public:
      class InitException {
       public:
        explicit InitException(QString const reason) : reason(reason) {}
        QString reason;
      };

      struct WallInfo {
        WallInfo(quint16 id, QJsonObject const &json);
        QString name;
        quint32 color;
        quint16 blend;
        quint8 large;
      };
      struct NPC {
        explicit NPC(QJsonObject const &json);
        QString title;
        quint16 head;
        qint16 id;
      };

      explicit WorldInfo(QObject *parent = 0);
      void init();
      QSharedPointer<TileInfo> operator[](int i) const;
      QSharedPointer<TileInfo> operator[](class Tile const *tile) const;

      QHash<int, QSharedPointer<TileInfo>> tiles;
      QHash<int, QSharedPointer<WallInfo>> walls;
      QHash<quint16, QString> prefixes;
      QHash<quint16, QString> items;
      QHash<int, QSharedPointer<NPC>> npcsById;
      QHash<int, QSharedPointer<NPC>> npcsByBanner;
      QHash<QString, QSharedPointer<NPC>> npcsByName;
      quint32 sky, earth, rock, hell, water, lava, honey;

 private:
          const QJsonArray load(QString const filename);
          QSharedPointer<TileInfo> find(QSharedPointer<TileInfo> info,
                                        quint16 u, quint16 v) const;
};

#endif  // WORLDINFO_H_
