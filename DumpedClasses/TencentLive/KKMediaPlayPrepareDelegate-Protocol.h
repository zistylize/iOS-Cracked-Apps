//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "QLPreCacheMediaDelegate.h"

@class KKMediaPlayInfo, KKVideoInfo, NSError, NSString, QLSeeBackState;

@protocol KKMediaPlayPrepareDelegate <NSObject, QLPreCacheMediaDelegate>
- (void)requestJsonVideoListFailed;
- (void)onVideoNoPurchaseForPaidMedia:(KKMediaPlayInfo *)arg1 withGetProVInfo:(unsigned long long)arg2;
- (void)onClarityInfoUpdated;
- (_Bool)isPlayHDMI;
- (_Bool)isPlayP2PShouldAbort;
- (_Bool)isPlayP2PFailed;
- (void)onVideoIDPrepared:(KKVideoInfo *)arg1;
- (_Bool)isNeedDetailData;
- (void)onVideoDetailDataReady;
- (void)onVideoInfoUpdated:(int)arg1;
- (void)onVideoInfoPrepareFailed:(NSError *)arg1;
- (void)onVideoInfoPrepared:(KKMediaPlayInfo *)arg1;
- (long long)currentInterfaceType;
- (NSString *)currentVideoFormat;
- (NSString *)playerVersion;

@optional
- (void)makeDetailData;
- (QLSeeBackState *)getSeeBackState;
- (NSString *)getLastSessionKey;
- (void)onVideoLiveQueue:(KKMediaPlayInfo *)arg1 withGetProVInfo:(unsigned long long)arg2;
@end
