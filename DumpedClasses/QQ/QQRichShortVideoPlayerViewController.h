//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQShortAudioVideoPlayerDelegate.h"
#import "QUIAlertPlusViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class C2CSVideoDownloadReqInfo, NSArray, NSError, NSString, NSURL, QQMessageModel, QQShortAudioVideoPlayer, UIDocumentInteractionController, UIView, UIWindow;

@interface QQRichShortVideoPlayerViewController : UIViewController <QQShortAudioVideoPlayerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, QQAudioSessionManagerDelegate, QUIAlertPlusViewDelegate>
{
    NSArray *_urlArray;
    NSURL *_url;
    QQShortAudioVideoPlayer *_player;
    C2CSVideoDownloadReqInfo *_downloadReq;
    UIDocumentInteractionController *_documentInteractionController;
    _Bool _hasReport;
    _Bool _netWorkChangePause;
    UIWindow *_maskView;
    NSError *_playError;
    UIView *_mainView;
    _Bool _bNoWifiAlertTimeShouldUpdated;
    QQMessageModel *_messageModel;
    id <QQRichShortVideoPlayerViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) C2CSVideoDownloadReqInfo *downloadReq; // @synthesize downloadReq=_downloadReq;
@property(nonatomic) _Bool bNoWifiAlertTimeShouldUpdated; // @synthesize bNoWifiAlertTimeShouldUpdated=_bNoWifiAlertTimeShouldUpdated;
@property(nonatomic) id <QQRichShortVideoPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)networkDidChange;
- (void)OnNetReachabilityDidChange:(id)arg1;
- (void)onPlayerLoadProgress:(double)arg1;
- (void)onPlayerLoadComplete;
- (void)onPlayerLoadError:(id)arg1;
- (void)onPlayerPlayError:(id)arg1;
- (void)onPlayerDidLoaded;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onDeactiveWithSystem;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)deactionAudioSession;
- (_Bool)requestAudioSession;
- (void)videoDidSendToQzone:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onUploadCancelButtonClick;
- (void)clickVideoView;
- (void)onMenuButtonClick:(id)arg1;
- (_Bool)netWorkChangePauseState;
- (_Bool)canForward;
- (void)onShareBtnClick:(id)arg1;
- (void)onSendToFriendBtnClick;
- (struct CGRect)getOriginalRectForSVThumb;
- (id)createCurrentThumbImage;
- (void)removeMaskView;
- (void)closeShortVideo:(_Bool)arg1;
- (struct CGSize)aspectFitSizeWithSrcSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
- (void)closePlayer;
- (void)setAudioVideoType;
- (_Bool)setupPlayer;
- (void)setupUI;
- (void)loadView;
- (id)player;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)handleVideoDownloadStateChangeNotificaion:(id)arg1;
- (void)onVideoUrlGet:(id)arg1;
- (void)dealloc;
- (id)initWithMovieURL:(id)arg1 messageModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
