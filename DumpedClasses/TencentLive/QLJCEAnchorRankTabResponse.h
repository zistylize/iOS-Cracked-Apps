//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEShareItem;

@interface QLJCEAnchorRankTabResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
    QLJCEShareItem *jcev2_p_2_o_shareItem;
    NSArray *jcev2_p_3_o_optFlags__b0x9i_VONSString;
    NSString *jcev2_p_4_o_unit;
    NSString *jcev2_p_5_o_desc;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_desc, setter=setJce_desc:) NSString *jcev2_p_5_o_desc; // @synthesize jcev2_p_5_o_desc;
@property(retain, nonatomic, getter=jce_unit, setter=setJce_unit:) NSString *jcev2_p_4_o_unit; // @synthesize jcev2_p_4_o_unit;
@property(retain, nonatomic, getter=jce_optFlags, setter=setJce_optFlags:) NSArray *jcev2_p_3_o_optFlags__b0x9i_VONSString; // @synthesize jcev2_p_3_o_optFlags__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_2_o_shareItem; // @synthesize jcev2_p_2_o_shareItem;
@property(retain, nonatomic, getter=jce_moduleList, setter=setJce_moduleList:) NSArray *jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo; // @synthesize jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
