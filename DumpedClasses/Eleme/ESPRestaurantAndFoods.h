//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class ESPRestaurant, ESPRestaurantAndFoodsHiddenFoodsCountData, NSArray;

@interface ESPRestaurantAndFoods : NVMModel
{
    ESPRestaurant *_restaurant;
    NSArray *_foods;
    NSArray *_normalExpandData;
    NSArray *_normalHiddenData;
    NSArray *_transferredExpandData;
    NSArray *_transferredHiddenData;
    ESPRestaurantAndFoodsHiddenFoodsCountData *_hiddenCountData;
}

+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (id)foodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) ESPRestaurantAndFoodsHiddenFoodsCountData *hiddenCountData; // @synthesize hiddenCountData=_hiddenCountData;
@property(copy, nonatomic) NSArray *transferredHiddenData; // @synthesize transferredHiddenData=_transferredHiddenData;
@property(copy, nonatomic) NSArray *transferredExpandData; // @synthesize transferredExpandData=_transferredExpandData;
@property(copy, nonatomic) NSArray *normalHiddenData; // @synthesize normalHiddenData=_normalHiddenData;
@property(copy, nonatomic) NSArray *normalExpandData; // @synthesize normalExpandData=_normalExpandData;
@property(copy, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(copy, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)groupDataExpanded:(_Bool)arg1 expectToTransferFoods:(_Bool)arg2;
- (long long)hiddenFoodCount;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

