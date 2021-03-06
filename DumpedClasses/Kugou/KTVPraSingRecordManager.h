//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

#import "KFAudioRecorderDelegate.h"
#import "RemoteControl.h"

@class KFAudioRecorder, KGKTVManager, KTVKrcPitchModel, KTVKrcScoreView, KTV_SongInfo, KtvKrcModel, NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSString, NSTimer;

@interface KTVPraSingRecordManager : KFViewModelObject <RemoteControl, KFAudioRecorderDelegate>
{
    NSTimer *_timer;
    NSString *accompanyPath;
    _Bool isSeekToTime;
    _Bool isStartTrueScore;
    NSMutableArray *pitchTimePointArr;
    int calculatePraCount;
    double playRecordCurrentTime;
    _Bool _isMySing;
    long long preStartTime;
    _Bool isValidUpdateTimer;
    _Bool _hasOrgin;
    _Bool _canPitch;
    _Bool _openPitch;
    _Bool _isTip;
    int _krcBeginIndex;
    int _krcSelectCount;
    int _praKrcType;
    int _praRecordType;
    id <KTVPraSingRecordManagerDelegate> _delegate;
    KFAudioRecorder *_audioRecorder;
    long long _circleBeginTime;
    long long _circleEndTime;
    KTVKrcScoreView *_krcScoreView;
    KtvKrcModel *_krcModel;
    long long _krcAdjustTime;
    NSString *_krcIdStr;
    KTV_SongInfo *_songInfo;
    NSArray *_krcSettingArray;
    KTVKrcPitchModel *_pitchModel;
    NSObject<OS_dispatch_group> *_group;
    KGKTVManager *_praLivePlayer;
}

@property(nonatomic) _Bool isTip; // @synthesize isTip=_isTip;
@property(nonatomic) _Bool openPitch; // @synthesize openPitch=_openPitch;
@property(retain, nonatomic) KGKTVManager *praLivePlayer; // @synthesize praLivePlayer=_praLivePlayer;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) int praRecordType; // @synthesize praRecordType=_praRecordType;
@property(retain, nonatomic) KTVKrcPitchModel *pitchModel; // @synthesize pitchModel=_pitchModel;
@property(nonatomic) _Bool canPitch; // @synthesize canPitch=_canPitch;
@property(retain, nonatomic) NSArray *krcSettingArray; // @synthesize krcSettingArray=_krcSettingArray;
@property(copy, nonatomic) KTV_SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) NSString *krcIdStr; // @synthesize krcIdStr=_krcIdStr;
@property(nonatomic) long long krcAdjustTime; // @synthesize krcAdjustTime=_krcAdjustTime;
@property(retain, nonatomic) KtvKrcModel *krcModel; // @synthesize krcModel=_krcModel;
@property(retain, nonatomic) KTVKrcScoreView *krcScoreView; // @synthesize krcScoreView=_krcScoreView;
@property(nonatomic) _Bool hasOrgin; // @synthesize hasOrgin=_hasOrgin;
@property(nonatomic) int praKrcType; // @synthesize praKrcType=_praKrcType;
@property(nonatomic) long long circleEndTime; // @synthesize circleEndTime=_circleEndTime;
@property(nonatomic) long long circleBeginTime; // @synthesize circleBeginTime=_circleBeginTime;
@property(nonatomic) int krcSelectCount; // @synthesize krcSelectCount=_krcSelectCount;
@property(nonatomic) int krcBeginIndex; // @synthesize krcBeginIndex=_krcBeginIndex;
@property(retain, nonatomic) KFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) __weak id <KTVPraSingRecordManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioRecorder:(id)arg1 resumeToPlayTime:(double)arg2;
- (void)audioRecorder:(id)arg1 updateRecoderTimeLine:(double)arg2 andFragmentStartTime:(double)arg3 perStartTime:(double)arg4;
- (void)audioRecorder:(id)arg1 statusForMergeProgress:(double)arg2;
- (void)audioRecorder:(id)arg1 statusChange:(int)arg2;
- (void)setRecordCircleBeginTime:(long long)arg1 circleEndTime:(long long)arg2;
- (void)stopRecord;
- (void)starRecord;
- (void)setIsValidUpdateTimer;
- (void)validUpdateTimer;
- (_Bool)kgRemoteControlReceivedWithEvent:(id)arg1;
- (void)unActiveRemoteControl;
- (void)activeRemoteControl;
- (void)dealloc;
- (void)updatePlayTime;
- (void)stopTimer;
- (void)startTimer;
- (void)setMySinging:(_Bool)arg1;
- (void)seekToTime:(double)arg1;
- (void)setCircleBeginTime:(long long)arg1 circleEndTime:(long long)arg2;
- (void)stopPlay;
- (void)starPlay;
- (void)starPlayRecord;
- (void)getPitchModelAndKrcFragment;
- (void)analyseKrcWorkRightWith:(id)arg1;
- (void)calculatePraRightKrc;
- (void)praKrcModelInit;
- (void)praKrcModelRemoveRightModels;
- (void)resume;
- (void)stopAll;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

