//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface MVTagBean : NSObject
{
    NSNumber *parentid;
    NSString *pname;
    NSArray *childs;
    NSString *ids;
    NSString *year;
}

@property(copy, nonatomic) NSString *year; // @synthesize year;
@property(copy, nonatomic) NSString *ids; // @synthesize ids;
@property(retain, nonatomic) NSArray *childs; // @synthesize childs;
@property(copy, nonatomic) NSString *pname; // @synthesize pname;
@property(retain, nonatomic) NSNumber *parentid; // @synthesize parentid;
- (void).cxx_destruct;
- (id)makeKeyOfChild;

@end

