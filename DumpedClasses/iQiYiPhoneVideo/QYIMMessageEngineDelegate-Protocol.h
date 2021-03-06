//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QYIMMessage, QYIMMessageEngine;
@protocol IQPushMessage, IQYIMCommand, IQYIMError, IQYIMNotice;

@protocol QYIMMessageEngineDelegate <NSObject>

@optional
- (void)engine:(QYIMMessageEngine *)arg1 didReceivePushMessage:(id <IQPushMessage>)arg2;
- (void)engine:(QYIMMessageEngine *)arg1 didReceiveError:(id <IQYIMError>)arg2;
- (void)engine:(QYIMMessageEngine *)arg1 didReceiveNotice:(id <IQYIMNotice>)arg2;
- (void)engine:(QYIMMessageEngine *)arg1 didReceiveCommand:(id <IQYIMCommand>)arg2;
- (void)engine:(QYIMMessageEngine *)arg1 didFailToSendMessage:(QYIMMessage *)arg2 error:(NSError *)arg3;
- (void)engine:(QYIMMessageEngine *)arg1 didSendMessage:(QYIMMessage *)arg2;
- (QYIMMessage *)engine:(QYIMMessageEngine *)arg1 willReceiveMessage:(QYIMMessage *)arg2;
- (void)engine:(QYIMMessageEngine *)arg1 didReceiveMessage:(QYIMMessage *)arg2;
@end

