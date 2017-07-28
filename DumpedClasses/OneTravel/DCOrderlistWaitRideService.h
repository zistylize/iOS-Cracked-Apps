//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseService.h"

@class DCPGetOrderInfoModel;

@interface DCOrderlistWaitRideService : DCBaseService
{
    DCPGetOrderInfoModel *_orderInfoModel;
}

+ (_Bool)isRouteExpiredAtLast:(id)arg1;
@property(retain, nonatomic) DCPGetOrderInfoModel *orderInfoModel; // @synthesize orderInfoModel=_orderInfoModel;
- (void).cxx_destruct;
- (void)loadReminder:(id)arg1 apiRequestSuccess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)loadWaitInfoWithParams:(id)arg1 apiRequestSuccess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)routeToOrderDetail;
- (_Bool)isCrossCity;
- (void)serviceDidLoadWithOrderId:(id)arg1;

@end
