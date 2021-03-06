//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSString, NSURLConnection;

@interface TVConfigManager : NSObject <NSURLConnectionDataDelegate>
{
    NSString *bakPrefix;
    NSString *otype;
    NSString *platform;
    NSString *host;
    NSString *port;
    NSString *cgi;
    NSString *player_channel_id;
    NSString *version;
    NSString *versionCode;
    NSString *ipflag;
    NSString *guid;
    int MAXRetryTimes;
    double timeout;
    NSURLConnection *configConnection;
    NSString *receiveData;
    _Bool useHTTPS;
    int retryTime;
    _Bool isRequested;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelAttainConfig;
- (void)SaveConfig:(id)arg1;
- (id)GetTVProxyConfigVersion;
- (id)GetTVProxyVersionCode;
- (id)GetTVProxyVersion;
- (id)GetTVProxyConfig;
- (id)MakeBKGetServerConfigUrl;
- (id)MakeGetServerConfigUrl;
- (void)SendSynRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (_Bool)SendHTTPSRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (void)SynRequestForConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

