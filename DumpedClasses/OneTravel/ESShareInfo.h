//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ESShareInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasJumpurl; // @dynamic hasJumpurl;
@property(nonatomic) _Bool hasPicurl; // @dynamic hasPicurl;
@property(nonatomic) _Bool hasSmsContent; // @dynamic hasSmsContent;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *jumpurl; // @dynamic jumpurl;
@property(copy, nonatomic) NSString *picurl; // @dynamic picurl;
@property(copy, nonatomic) NSString *smsContent; // @dynamic smsContent;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
