//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface WKFeedLocationAdColorMgr : NSObject
{
    NSDictionary *_titleColorDict;
    NSDictionary *_descColorDict;
    NSDictionary *_bgColorDict;
    NSDictionary *_locLabelDict;
    NSSet *_entileTagSet;
    NSDictionary *_locImageNameDict;
}

@property(retain, nonatomic) NSDictionary *locImageNameDict; // @synthesize locImageNameDict=_locImageNameDict;
@property(retain, nonatomic) NSSet *entileTagSet; // @synthesize entileTagSet=_entileTagSet;
@property(retain, nonatomic) NSDictionary *locLabelDict; // @synthesize locLabelDict=_locLabelDict;
@property(retain, nonatomic) NSDictionary *bgColorDict; // @synthesize bgColorDict=_bgColorDict;
@property(retain, nonatomic) NSDictionary *descColorDict; // @synthesize descColorDict=_descColorDict;
@property(retain, nonatomic) NSDictionary *titleColorDict; // @synthesize titleColorDict=_titleColorDict;
- (void).cxx_destruct;
- (_Bool)isEntileBgTemp:(id)arg1;
- (id)getLocLabelBgColorAndImageNameDictWithTempId:(id)arg1;
- (id)getDescColorWithTempId:(id)arg1;
- (id)getTitleColorWithTempId:(id)arg1;
- (id)getBgColorWithTempId:(id)arg1;

@end

