//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFlightPickerView, NSAttributedString, NSString;

@protocol CTFlightPickerViewDataSource <NSObject>
- (NSAttributedString *)flightPickerView:(CTFlightPickerView *)arg1 attributedTitleForRow:(long long)arg2;
- (long long)numberOfRowsInFlightPickerView:(CTFlightPickerView *)arg1;

@optional
- (NSString *)titleForflightPickerView:(CTFlightPickerView *)arg1;
@end

