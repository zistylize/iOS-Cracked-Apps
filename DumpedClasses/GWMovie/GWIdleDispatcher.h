//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GWIdleDispatcher : NSObject
{
    CDUnknownBlockType _runWhileIsIdleBlock;
    CDUnknownBlockType _releaseRunloopBlock;
}

@property(copy, nonatomic) CDUnknownBlockType releaseRunloopBlock; // @synthesize releaseRunloopBlock=_releaseRunloopBlock;
@property(copy, nonatomic) CDUnknownBlockType runWhileIsIdleBlock; // @synthesize runWhileIsIdleBlock=_runWhileIsIdleBlock;
- (void).cxx_destruct;
- (void)taskWillExcuteWhileIdel;
- (void)startRunloopObserver;
- (void)stopRunloopObserver;
- (_Bool)isObserving;
- (id)init;
- (void)dealloc;

@end
