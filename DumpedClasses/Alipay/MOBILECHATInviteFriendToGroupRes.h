//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECHATSCCommonResult.h"

@class NSArray;

@interface MOBILECHATInviteFriendToGroupRes : MOBILECHATSCCommonResult
{
    NSArray *_memberAdded;
    NSArray *_memberNeedVerification;
    NSArray *_memberNeedInvitation;
}

+ (Class)memberNeedInvitationElementClass;
+ (Class)memberNeedVerificationElementClass;
+ (Class)memberAddedElementClass;
@property(retain, nonatomic) NSArray *memberNeedInvitation; // @synthesize memberNeedInvitation=_memberNeedInvitation;
@property(retain, nonatomic) NSArray *memberNeedVerification; // @synthesize memberNeedVerification=_memberNeedVerification;
@property(retain, nonatomic) NSArray *memberAdded; // @synthesize memberAdded=_memberAdded;
- (void).cxx_destruct;

@end
