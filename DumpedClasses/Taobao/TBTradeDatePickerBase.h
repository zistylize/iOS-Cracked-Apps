//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSMutableDictionary;

@interface TBTradeDatePickerBase : NSObject
{
    NSMutableDictionary *_data;
    long long _datePickerMode;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSDate *_selectedDate;
    NSDateFormatter *_formatter;
    NSCalendar *_calendar;
    NSArray *_weekdayText;
    long long _invalidWeekday;
}

@property(nonatomic) long long invalidWeekday; // @synthesize invalidWeekday=_invalidWeekday;
@property(retain, nonatomic) NSArray *weekdayText; // @synthesize weekdayText=_weekdayText;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isValidWeekday:(id)arg1 error:(id *)arg2;
- (id)title;
- (id)initWithData:(id)arg1;

@end
