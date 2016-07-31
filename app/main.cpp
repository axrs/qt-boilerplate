#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
  qputenv("QT_AUTO_SCREEN_SCALE_FACTOR","1");
  QGuiApplication::setAttribute(Qt::AA_Use96Dpi);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

  return app.exec();
}
