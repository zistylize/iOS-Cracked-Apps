//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface CTTourSearchProductDetailData : NSObject <NSCoding, NSCopying>
{
    long long _Count;
    NSArray *_ProductInfoList;
    NSString *_SaleCityName;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain) NSString *SaleCityName; // @synthesize SaleCityName=_SaleCityName;
@property(retain) NSArray *ProductInfoList; // @synthesize ProductInfoList=_ProductInfoList;
@property long long Count; // @synthesize Count=_Count;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
