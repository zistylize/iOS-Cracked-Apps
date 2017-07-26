//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKTMonitorProtocol.h"

@class NSString;

@interface TBMKTMonitor : NSObject <MKTMonitorProtocol>
{
}

+ (void)monitorPullPerformance:(id)arg1;
+ (void)monitorPullPerformanceSetup;
+ (void)monitorMsgPerformance:(id)arg1;
+ (void)monitorMsgPerformanceSetup;
+ (void)monitorSubTime:(id)arg1 withBizCode:(long long)arg2 withValue:(double)arg3;
+ (void)monitorSubTimePerformanceSetup:(id)arg1;
+ (void)monitorFailed:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 arg:(id)arg4;
+ (void)monitorSuccess:(id)arg1 withExtParam:(id)arg2;
+ (void)monitorCounter:(id)arg1 withCount:(double)arg2 withExtParam:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
