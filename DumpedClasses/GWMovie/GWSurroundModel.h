//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString;

@interface GWSurroundModel : GWObject
{
    NSString *_pid;
    NSString *_name;
    NSString *_logo;
    NSString *_purl;
    NSArray *_labelList;
    NSString *_enjoyCount;
    NSString *_price;
    NSString *_memberEnjoy;
}

@property(retain, nonatomic) NSString *memberEnjoy; // @synthesize memberEnjoy=_memberEnjoy;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *enjoyCount; // @synthesize enjoyCount=_enjoyCount;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSString *purl; // @synthesize purl=_purl;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)initWithWPGoods:(id)arg1;

@end
