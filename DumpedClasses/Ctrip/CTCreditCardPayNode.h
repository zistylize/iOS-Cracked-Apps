//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPayBasicWidgetNode.h"

@class NSString;

@interface CTCreditCardPayNode : CTPayBasicWidgetNode
{
    _Bool guaranteed;
    _Bool descHidden;
    NSString *displayAmount;
    NSString *guaranteedAmount;
    NSString *modifyDeadline;
    NSString *_displayCurrency;
    NSString *_displaySlaveAmount;
    NSString *_displaySlaveCurrency;
}

@property(copy, nonatomic) NSString *displaySlaveCurrency; // @synthesize displaySlaveCurrency=_displaySlaveCurrency;
@property(copy, nonatomic) NSString *displaySlaveAmount; // @synthesize displaySlaveAmount=_displaySlaveAmount;
@property(copy, nonatomic) NSString *displayCurrency; // @synthesize displayCurrency=_displayCurrency;
@property(nonatomic) _Bool descHidden; // @synthesize descHidden;
@property(copy, nonatomic) NSString *modifyDeadline; // @synthesize modifyDeadline;
@property(copy, nonatomic) NSString *guaranteedAmount; // @synthesize guaranteedAmount;
@property(nonatomic) _Bool guaranteed; // @synthesize guaranteed;
@property(copy, nonatomic) NSString *displayAmount; // @synthesize displayAmount;
- (void).cxx_destruct;
- (id)init;

@end
