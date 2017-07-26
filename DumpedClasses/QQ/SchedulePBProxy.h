//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SchedulePBProxy : NSObject
{
}

+ (int)parseMsgType0x210_SubMsgType0x9c_Schedule:(const void *)arg1 DataLen:(int)arg2 notification:(id)arg3;
+ (int)parseMsgType0x210_SubMsgType0x9b_Schedule:(const void *)arg1 DataLen:(int)arg2 notification:(id)arg3;
+ (int)parse0x592_11_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_10_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_9_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_8_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_7_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_6_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_5_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_4_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_3_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_2_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (int)parse0x592_1_Rsp:(id)arg1 dataWithBytes:(char *)arg2 dataLength:(int)arg3 Seq:(int)arg4;
+ (id)BuildSetScheduleAlarmReqBuf:(id)arg1 isAlarm:(_Bool)arg2;
+ (id)BuildScheduleSetAllReadedTimeReqBuf:(unsigned long long)arg1;
+ (id)BuildUnReadScheduleReqBuf:(unsigned int)arg1;
+ (id)BuildGetScheduleListReqBuf:(id)arg1 GetDirection:(unsigned int)arg2 TimeStamp:(unsigned long long)arg3 Amount:(unsigned int)arg4;
+ (id)BuildRecallScheduleReqBuf:(id)arg1;
+ (id)BuildGetScheduleDetailReqBuf:(id)arg1;
+ (id)BuildShareScheduleReqBuf:(id)arg1 WorkflowID:(id)arg2 ReceiverUin:(unsigned long long)arg3;
+ (id)BuildUpdateScheduleReqBuf:(id)arg1;
+ (id)BuildDeleteScheduleReqBuf:(id)arg1;
+ (id)BuildCreateScheduleReqBuf:(id)arg1;
+ (id)DecodeNotification:(struct CPBMessageDecoder *)arg1 notification:(id)arg2;
+ (_Bool)DecoderAppID:(struct CPBMessageDecoder *)arg1 AppID:(id)arg2;
+ (id)DecodeWorkflow:(struct CPBMessageDecoder *)arg1;
+ (void)BuildWorkflowReqBufByEncoder:(struct CPBMessageEncoder *)arg1 WithScheduleData:(id)arg2 SubMessageID:(int)arg3;
+ (void)BuildObserversReqBufByEncoder:(struct CPBMessageEncoder *)arg1 MemberArray:(id)arg2;
+ (void)BuildRemindTimerReqBufByEncoder:(struct CPBMessageEncoder *)arg1 StartTime:(unsigned long long)arg2 EndTime:(unsigned long long)arg3 offsetType:(int)arg4 Offset:(unsigned int)arg5 RepeatType:(int)arg6 RemindFlag:(unsigned int)arg7;
+ (void)BuildAppIDReqBufByEncoder:(struct CPBMessageEncoder *)arg1;
- (void)readedConfirmReport:(id)arg1 seq:(unsigned int)arg2;

@end
