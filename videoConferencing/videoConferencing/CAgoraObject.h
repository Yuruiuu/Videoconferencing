#pragma once
#include <QObject>
#include "IAgoraRtcEngine.h"
#include <memory>

using namespace agora::rtc;
using namespace std;

class CAgoraObject : public QObject
{
	Q_OBJECT

public:
	CAgoraObject();
	~CAgoraObject();

	int init();
	int joinChannel(const QString& channel, uint uid);
	BOOL LocalVideoPreview(HWND hVideoWnd, BOOL bPreviewOn, RENDER_MODE_TYPE renderType = RENDER_MODE_TYPE::RENDER_MODE_FIT);
	BOOL RemoteVideoRender(uid_t uid, HWND hVideoWnd, RENDER_MODE_TYPE renderType = RENDER_MODE_TYPE::RENDER_MODE_HIDDEN);

signals:
	void sender_joinedChannelSuccess(const QString& qsChannel, unsigned int uid, int elapsed);
	void sender_userJoined(unsigned int uid, int elapsed);
	void sender_userOffline(unsigned int uid, USER_OFFLINE_REASON_TYPE reason);

private:
	IRtcEngine* m_rtcEngine;
	std::unique_ptr<agora::rtc::IRtcEngineEventHandler> m_eventHandler;
};

