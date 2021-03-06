//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMessageRequest.h"

@class NSString;

@interface QYCinemaCommitSeatRequest : QYMessageRequest
{
    NSString *_partner_id;
    NSString *_play_UpdateTime;
    NSString *_cinema_id;
    NSString *_user_mobile;
    NSString *_iqiyi_src;
    NSString *_seq_no;
    NSString *_uid;
    NSString *_seat_id;
    NSString *_seat_info;
    NSString *_total_price;
    NSString *_seat_num;
    NSString *_preOrderId;
    NSString *_qipuId;
    unsigned long long _dealStartTime;
    unsigned long long _requestEndTime;
}

@property(nonatomic) unsigned long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) unsigned long long dealStartTime; // @synthesize dealStartTime=_dealStartTime;
@property(copy, nonatomic) NSString *qipuId; // @synthesize qipuId=_qipuId;
@property(copy, nonatomic) NSString *preOrderId; // @synthesize preOrderId=_preOrderId;
@property(copy, nonatomic) NSString *seat_num; // @synthesize seat_num=_seat_num;
@property(copy, nonatomic) NSString *total_price; // @synthesize total_price=_total_price;
@property(copy, nonatomic) NSString *seat_info; // @synthesize seat_info=_seat_info;
@property(copy, nonatomic) NSString *seat_id; // @synthesize seat_id=_seat_id;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *seq_no; // @synthesize seq_no=_seq_no;
@property(copy, nonatomic) NSString *iqiyi_src; // @synthesize iqiyi_src=_iqiyi_src;
@property(copy, nonatomic) NSString *user_mobile; // @synthesize user_mobile=_user_mobile;
@property(copy, nonatomic) NSString *cinema_id; // @synthesize cinema_id=_cinema_id;
@property(copy, nonatomic) NSString *play_UpdateTime; // @synthesize play_UpdateTime=_play_UpdateTime;
@property(copy, nonatomic) NSString *partner_id; // @synthesize partner_id=_partner_id;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;
- (void)dealloc;

@end

