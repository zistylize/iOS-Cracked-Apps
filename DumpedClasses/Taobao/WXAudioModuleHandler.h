//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "WXAudioModuleProtocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface WXAudioModuleHandler : NSObject <AVAudioPlayerDelegate, WXAudioModuleProtocol>
{
    NSMutableDictionary *_playerMap;
    NSMutableDictionary *_finishBlockMap;
    NSArray *_SUPPORTED_FORMATS;
}

@property(retain, nonatomic) NSArray *SUPPORTED_FORMATS; // @synthesize SUPPORTED_FORMATS=_SUPPORTED_FORMATS;
@property(retain, nonatomic) NSMutableDictionary *finishBlockMap; // @synthesize finishBlockMap=_finishBlockMap;
@property(retain, nonatomic) NSMutableDictionary *playerMap; // @synthesize playerMap=_playerMap;
- (void).cxx_destruct;
- (double)getDuration:(id)arg1;
- (void)setVolume:(double)arg1;
- (id)canPlayType:(id)arg1;
- (void)stop:(unsigned long long)arg1;
- (void)pause:(unsigned long long)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)getIdentifierFromPlayer:(id)arg1;
- (void)play:(id)arg1 identifier:(unsigned long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
