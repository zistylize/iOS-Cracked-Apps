//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALBBHTTPDNSOrigin : NSObject
{
    NSString *_ip;
    long long _ttl;
}

@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (long long)getTimetoLive;
- (id)getIPString;
- (id)initWithHost:(id)arg1 liveTime:(long long)arg2;

@end
