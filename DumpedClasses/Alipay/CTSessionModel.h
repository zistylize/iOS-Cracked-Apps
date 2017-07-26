//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APContactInfo, APGroupInfo, NSArray, NSDictionary, NSNumber, NSString;

@interface CTSessionModel : NSObject
{
    int _type;
    int _actionType;
    NSDictionary *_launcher;
    APContactInfo *_contactInfo;
    APGroupInfo *_groupInfo;
    NSArray *_memberContacts;
}

@property(retain, nonatomic) NSArray *memberContacts; // @synthesize memberContacts=_memberContacts;
@property(retain, nonatomic) APGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *launcher; // @synthesize launcher=_launcher;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bizType;
@property(readonly, nonatomic) NSNumber *localID;
@property(readonly, nonatomic) _Bool isPrivateMsg;
@property(readonly, nonatomic) _Bool isDiscussGroup;
@property(readonly, nonatomic) _Bool isChatRoom;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic) NSString *account;
@property(readonly, nonatomic) NSString *userType;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, nonatomic) NSString *headUrl;
@property(readonly, nonatomic) NSString *sessionId;
@property(readonly, nonatomic) long long numOfMember;
@property(readonly, nonatomic) NSString *title;

@end
