//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, TicketInformationModel;

@interface QueryTicketInfoResponse : CTBusinessBean
{
    int result;
    NSString *subCode;
    NSString *resultMessage;
    TicketInformationModel *ticketInfoModel;
    NSMutableArray *walletInfoList;
}

@property(retain, nonatomic) NSMutableArray *walletInfoList; // @synthesize walletInfoList;
@property(retain, nonatomic) TicketInformationModel *ticketInfoModel; // @synthesize ticketInfoModel;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
