//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextField;

@interface CTPaymentValidInput : NSObject
{
    UITextField *_textField;
    NSString *_replacementString;
    struct _NSRange _range;
}

+ (id)validInputWith:(long long)arg1;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)inputNumberWithString:(id)arg1;
- (_Bool)validInputTextField;

@end
