#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>


static QJSValue appVersionSingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine);

    QJSValue appInfo = scriptEngine->newObject();
    appInfo.setProperty("version",GIT_VERSION);
    return appInfo;
}

int main(int argc, char *argv[])
{
    //DPI Fixing
    qputenv("QT_AUTO_SCREEN_SCALE_FACTOR","1");
    QGuiApplication::setAttribute(Qt::AA_Use96Dpi);

    QGuiApplication app(argc, argv);

    //Expose Git tag versioning
    qmlRegisterSingletonType("Native",1,0,"AppInfo",appVersionSingletonProvider);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
