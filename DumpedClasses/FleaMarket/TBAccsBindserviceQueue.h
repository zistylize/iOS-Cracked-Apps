//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, TBAccsManager;

@interface TBAccsBindserviceQueue : NSObject
{
    NSMutableDictionary *_taskMap;
    NSRecursiveLock *_lock;
    TBAccsManager *_am;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)execute;
- (void)submitTaskWithServiceId:(id)arg1 callBack:(CDUnknownBlockType)arg2 receviceDataBlock:(CDUnknownBlockType)arg3;
- (void)notifyAccsManagerStarted:(id)arg1;
- (id)init;

@end
