//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMLyricCellDelegate.h"
#import "NMLyricDelegate.h"
#import "NMLyricFontChangeDelegate.h"
#import "NNMLyricFontAdjustDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMLyricFeedbackRequest, NMLyricFontAdjustView, NMLyricModel, NMSong, NSIndexPath, NSInvocationOperation, NSMutableArray, NSOperationQueue, NSString, NSTimer, UIActionSheet;

@interface NMLyricViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMLyricDelegate, UIActionSheetDelegate, NMHttpRequestDelegate, NMLyricCellDelegate, NMLyricFontChangeDelegate, NNMLyricFontAdjustDelegate>
{
    NSTimer *_timerPlay;
    _Bool _isDraging;
    NMSong *_song;
    _Bool _isRecordedDrag;
    long long _lastIndex;
    double _lastTime;
    double _lastHighlightTime;
    _Bool _delayLoading;
    UIActionSheet *_actionSheet;
    long long _currentLyricVersion;
    NMLyricFeedbackRequest *_lyricFeedbackRequest;
    NSString *_feedbackSongId;
    long long _feedbackLyricVersion;
    NSOperationQueue *_parseLyricOperationQueue;
    NSInvocationOperation *_parseLyricOperation;
    NMSong *_delayLoadLyricSong;
    NSTimer *_timer;
    double _emptyLyricCellHeight;
    long long _paddingLineCount;
    NMLyricFontAdjustView *_lyricFontAdjustView;
    unsigned long long _type;
    NSMutableArray *_lyricList;
    unsigned long long _currentShowMode;
    id <NMLyricViewControllerDelegate> _delegate;
    NSIndexPath *_lyricIndexToPlayPath;
    NSIndexPath *_currentPlayIndexPath;
    NMLyricModel *_lyricModel;
}

@property(retain, nonatomic) NMLyricModel *lyricModel; // @synthesize lyricModel=_lyricModel;
@property(readonly, nonatomic) long long paddingLineCount; // @synthesize paddingLineCount=_paddingLineCount;
@property(retain, nonatomic) NSIndexPath *currentPlayIndexPath; // @synthesize currentPlayIndexPath=_currentPlayIndexPath;
@property(retain, nonatomic) NSIndexPath *lyricIndexToPlayPath; // @synthesize lyricIndexToPlayPath=_lyricIndexToPlayPath;
@property(nonatomic) id <NMLyricViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentShowMode; // @synthesize currentShowMode=_currentShowMode;
@property(readonly, nonatomic) NSMutableArray *lyricList; // @synthesize lyricList=_lyricList;
@property(readonly, nonatomic) NMSong *song; // @synthesize song=_song;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)fontSizeDesc:(long long)arg1;
- (void)lyricFontSizeDecrease;
- (void)lyricFontSizeIncrease;
- (void)lyricFontAdjustWithFontSizetype:(long long)arg1;
- (void)_showLyricAdjustView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)lyricUpdated:(id)arg1 lyricError:(unsigned long long)arg2;
- (void)lyricUpdatedOnMainThread:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)_doSendFeedBackRequest:(unsigned long long)arg1;
- (void)_lyricOfferNotice:(unsigned long long)arg1;
- (void)askForScrollingButtonClicked:(id)arg1;
- (void)proceedExtractFPClicked:(id)arg1;
- (void)missLyricButtonClicked:(id)arg1;
- (void)reloadForFail;
- (void)onLyricToPlayBtnClicked:(id)arg1;
- (_Bool)isScrollingOrWaitingOperation;
- (double)getTimeFromPath:(id)arg1;
- (void)onWrongBtnClicked:(id)arg1;
- (void)stopHintAnimation;
- (void)startHintAnimation;
- (void)hideShareHintAfterDelay:(double)arg1;
@property(readonly, nonatomic) long long offset;
@property(readonly, nonatomic) _Bool isLrc;
- (void)hideLyricToPlayButton;
- (void)setTimeToDisMiss:(double)arg1;
- (void)currentPlayTime:(double)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)currentPlayTime:(double)arg1 animated:(_Bool)arg2;
- (void)setHighlightIndexWithTime:(double)arg1;
- (id)textForIndex:(unsigned long long)arg1;
- (long long)currentPlayIndex:(double)arg1 continuous:(_Bool)arg2 lastIndex:(long long)arg3;
- (void)tableViewFinishDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)formatCopyrightText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateLyricParseResult:(id)arg1;
- (_Bool)strContainsUrl:(id)arg1;
- (id)parseLyricDetail:(id)arg1;
- (void)parseLyricUpdateInOperation:(id)arg1;
- (void)parseLyricUpdate:(id)arg1;
- (void)getIpodLyricInOperation:(id)arg1;
- (void)getLyricInOperation:(id)arg1;
- (void)getIpodLyric:(id)arg1 needExtractFP:(_Bool)arg2;
- (void)getLyricWithSong:(id)arg1;
- (void)cancelParseLyricOperation;
- (void)reload:(_Bool)arg1;
- (void)songChange:(id)arg1;
- (void)songChangeInternal:(id)arg1;
- (void)songChange:(id)arg1 delayLoad:(_Bool)arg2;
- (void)setLoadingStateForDelay;
- (void)setNowPlayingCenterLyric:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)tableView;
- (id)lyricView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
