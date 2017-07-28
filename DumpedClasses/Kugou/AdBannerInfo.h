//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdBannerInfo : NSObject
{
    NSString *_rowid;
    NSString *_title;
    long long _subtype;
    NSString *_logo;
    NSString *_banner;
    NSString *_url;
    NSString *_banner_text;
    long long _srctype;
    NSString *_vadmaster;
    NSString *_rankId;
    NSString *_rankStringOfImageURL;
    NSString *_rankName;
    long long _rankType;
    NSString *_rankDec;
}

@property(copy, nonatomic) NSString *rankDec; // @synthesize rankDec=_rankDec;
@property(nonatomic) long long rankType; // @synthesize rankType=_rankType;
@property(copy, nonatomic) NSString *rankName; // @synthesize rankName=_rankName;
@property(copy, nonatomic) NSString *rankStringOfImageURL; // @synthesize rankStringOfImageURL=_rankStringOfImageURL;
@property(copy, nonatomic) NSString *rankId; // @synthesize rankId=_rankId;
@property(copy, nonatomic) NSString *vadmaster; // @synthesize vadmaster=_vadmaster;
@property(nonatomic) long long srctype; // @synthesize srctype=_srctype;
@property(copy, nonatomic) NSString *banner_text; // @synthesize banner_text=_banner_text;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *rowid; // @synthesize rowid=_rowid;
- (void).cxx_destruct;
- (id)replaceUnicode:(id)arg1;
- (id)initWithShareActionAds:(id)arg1;
- (id)copyToDictionary;
- (void)copyFromDictionary:(id)arg1;

@end
