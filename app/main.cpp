#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

int main(int argc, char *argv[])
{

    qDebug() << GIT_VERSION;

  qputenv("QT_AUTO_SCREEN_SCALE_FACTOR","1");
  QGuiApplication::setAttribute(Qt::AA_Use96Dpi);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

  return app.exec();
}
