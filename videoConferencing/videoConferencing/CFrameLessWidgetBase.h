#pragma once
#include <QWidget>

class CFrameLessWidgetBase :
    public QWidget
{
public:
    CFrameLessWidgetBase(QWidget* p = nullptr);
    ~CFrameLessWidgetBase() {}

protected:
    bool nativeEvent(const QByteArray& eventType, void* message, long* result) override;

private:
    int m_nBorderWidth = 5;
};

