//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTTrainQiangPiaoSender : CTSender
{
}

+ (id)transformAppendProductFromGrab:(id)arg1;
+ (id)transformSalePackageInfoFromGrab:(id)arg1;
+ (id)getInstance;
- (id)sendTicketChangeAcceptInfoV2WithCacheBean:(id)arg1 originalOrderId:(long long)arg2 appendProductV2Model:(id)arg3 buyProductNumber:(long long)arg4;
- (id)sendTicketSpeedUpDetailWithCacheBean:(id)arg1 orderId:(long long)arg2;
- (id)sendTicketChangeAcceptInfoV2WithCacheBean:(id)arg1 originalOrderId:(long long)arg2 trainNumbers:(id)arg3 seatNames:(id)arg4 jLExpireDateTime:(id)arg5 lastPayTime:(id)arg6 isAllDayJL:(_Bool)arg7 isAcceptRecTrainJL:(_Bool)arg8 grabType:(int)arg9 allDepartStation:(id)arg10 allArriveStation:(id)arg11 timeLine:(id)arg12 trainTypes:(id)arg13 jLAlternativeDate:(id)arg14;
- (id)sendChangeQiangPiaoDetailWithCacheBean:(id)arg1 orderId:(long long)arg2 areaID:(int)arg3;
- (id)sendGetQiangPiaoRecommandLineWithCacheBean:(id)arg1 departStation:(id)arg2 arriveStation:(id)arg3 departDate:(id)arg4 trainNumber:(id)arg5 seatName:(id)arg6 seatPrice:(id)arg7;
- (id)sendGetQiangPiaoRecommandWithCacheBean:(id)arg1 departStation:(id)arg2 arriveStation:(id)arg3 departDate:(id)arg4 trainNumbers:(id)arg5 seatNames:(id)arg6 successRate:(id)arg7;
- (id)sendGetQiangPiaoInfoWithCacheBean:(id)arg1 departStation:(id)arg2 arriveStation:(id)arg3 departDate:(id)arg4 trainNumbers:(id)arg5 seatNames:(id)arg6 vendorID:(int)arg7 isMember:(_Bool)arg8;
- (id)sendGetJianLouTaskListWithCacheBean:(id)arg1;

@end
