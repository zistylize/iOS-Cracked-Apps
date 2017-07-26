//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKServer.h"

#import "TBSDKRequestDelegate.h"

@interface TBSDKTOPServer : TBSDKServer <TBSDKRequestDelegate>
{
    _Bool _needsUserSession;
}

+ (id)requestWithMethod:(id)arg1;
@property(nonatomic) _Bool needsUserSession; // @synthesize needsUserSession=_needsUserSession;
- (void)removeFromQueue;
- (void)setResponseFromRquest:(id)arg1;
- (void)haveError:(id)arg1;
- (id)handleError:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)clearDelegatesAndCancel;
- (void)startAsynchronous;
- (void)startSynchronous;
- (void)removeParam:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (id)sign;
- (void)setupTOPRequestDataSourceAndRequest;
- (void)setupTOPRequestProtocolParameters;
- (id)initWithMethod:(id)arg1;

@end
