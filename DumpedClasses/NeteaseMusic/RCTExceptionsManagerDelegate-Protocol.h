//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, RCTBridge;

@protocol RCTExceptionsManagerDelegate <NSObject>
- (void)handleFatalJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3 bridge:(RCTBridge *)arg4;
- (void)handleSoftJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3 bridge:(RCTBridge *)arg4;

@optional
- (void)updateJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3 bridge:(RCTBridge *)arg4;
@end
