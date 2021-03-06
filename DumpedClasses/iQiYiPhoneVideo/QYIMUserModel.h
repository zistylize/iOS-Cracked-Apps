//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface QYIMUserModel : NSObject <NSCoding, NSCopying>
{
    _Bool _enableBackground;
    NSString *_nickName;
    NSString *_uid;
    NSString *_authType;
    NSString *_authStr;
    NSString *_business;
    unsigned long long _loginType;
    NSString *_appVersion;
    NSString *_appId;
    NSString *_deviceId;
    NSString *_deviceName;
    NSString *_bindExtra;
    NSString *_account;
    NSString *_pushToken;
    NSString *_atoken;
    NSString *_qypid;
    NSString *_hydraToken;
}

+ (id)fetch;
+ (void)save:(id)arg1;
@property(copy, nonatomic) NSString *hydraToken; // @synthesize hydraToken=_hydraToken;
@property(nonatomic) _Bool enableBackground; // @synthesize enableBackground=_enableBackground;
@property(copy, nonatomic) NSString *qypid; // @synthesize qypid=_qypid;
@property(copy, nonatomic) NSString *atoken; // @synthesize atoken=_atoken;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *bindExtra; // @synthesize bindExtra=_bindExtra;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *authStr; // @synthesize authStr=_authStr;
@property(copy, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)generateImUserId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

