//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSMutableArray, NSString, QLJCEONALoadMoreAction, QLJCEONAPosterTitle, QLJCEONASplitLine;

@interface QLJCEONADetailsCommentList : JceObjectV2
{
    _Bool jcev2_p_3_o_isAllData;
    int jcev2_p_9_o_maxOutShowsize;
    NSArray *jcev2_p_0_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed;
    NSString *jcev2_p_1_o_commentKey;
    NSString *jcev2_p_2_o_pageContext;
    NSString *jcev2_p_4_o_reportParams;
    NSString *jcev2_p_5_o_reportKey;
    QLJCEONAPosterTitle *jcev2_p_6_o_title;
    QLJCEONASplitLine *jcev2_p_7_o_spliteLine;
    QLJCEONALoadMoreAction *jcev2_p_8_o_moreAction;
    long long jcev2_p_10_o_allCommentNum;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_allCommentNum, setter=setJce_allCommentNum:) long long jcev2_p_10_o_allCommentNum; // @synthesize jcev2_p_10_o_allCommentNum;
@property(nonatomic, getter=jce_maxOutShowsize, setter=setJce_maxOutShowsize:) int jcev2_p_9_o_maxOutShowsize; // @synthesize jcev2_p_9_o_maxOutShowsize;
@property(retain, nonatomic, getter=jce_moreAction, setter=setJce_moreAction:) QLJCEONALoadMoreAction *jcev2_p_8_o_moreAction; // @synthesize jcev2_p_8_o_moreAction;
@property(retain, nonatomic, getter=jce_spliteLine, setter=setJce_spliteLine:) QLJCEONASplitLine *jcev2_p_7_o_spliteLine; // @synthesize jcev2_p_7_o_spliteLine;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) QLJCEONAPosterTitle *jcev2_p_6_o_title; // @synthesize jcev2_p_6_o_title;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_5_o_reportKey; // @synthesize jcev2_p_5_o_reportKey;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_4_o_reportParams; // @synthesize jcev2_p_4_o_reportParams;
@property(nonatomic, getter=jce_isAllData, setter=setJce_isAllData:) _Bool jcev2_p_3_o_isAllData; // @synthesize jcev2_p_3_o_isAllData;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_commentKey, setter=setJce_commentKey:) NSString *jcev2_p_1_o_commentKey; // @synthesize jcev2_p_1_o_commentKey;
@property(retain, nonatomic, getter=jce_feedList, setter=setJce_feedList:) NSArray *jcev2_p_0_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed; // @synthesize jcev2_p_0_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long mergedAllCommentNum; // @dynamic mergedAllCommentNum;
@property(retain, nonatomic) NSMutableArray *mergedFeedlistSubPage; // @dynamic mergedFeedlistSubPage;
@property(retain, nonatomic) NSMutableArray *mergedFeedlist; // @dynamic mergedFeedlist;

@end
