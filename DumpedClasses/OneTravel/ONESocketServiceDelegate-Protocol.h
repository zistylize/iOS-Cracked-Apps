//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONEPushMsgDecoder, ONESocketService;

@protocol ONESocketServiceDelegate <NSObject>
- (void)onesocket:(ONESocketService *)arg1 progressCallback:(unsigned long long)arg2 state:(unsigned int)arg3 percent:(unsigned int)arg4;
- (void)onesocket:(ONESocketService *)arg1 requestCallback:(int)arg2 msgType:(int)arg3 seqId:(unsigned long long)arg4;
- (void)onesocket:(ONESocketService *)arg1 channelCallback:(int)arg2;
- (void)onesocket:(ONESocketService *)arg1 didRecviveData:(ONEPushMsgDecoder *)arg2;
@end
