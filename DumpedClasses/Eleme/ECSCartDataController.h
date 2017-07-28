//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSURLSessionDataTask;

@interface ECSCartDataController : NSObject
{
    _Bool _showInvalidRestaurants;
    CDUnknownBlockType _cartDataFetchCompletionHandler;
    NSArray *_rawCartDataList;
    NSArray *_cartData;
    NSMutableArray *_validRestaurants;
    NSMutableArray *_invalidRestaurants;
    NSURLSessionDataTask *_lastSessionTask;
}

@property(retain, nonatomic) NSURLSessionDataTask *lastSessionTask; // @synthesize lastSessionTask=_lastSessionTask;
@property(retain, nonatomic) NSMutableArray *invalidRestaurants; // @synthesize invalidRestaurants=_invalidRestaurants;
@property(retain, nonatomic) NSMutableArray *validRestaurants; // @synthesize validRestaurants=_validRestaurants;
@property(retain, nonatomic) NSArray *cartData; // @synthesize cartData=_cartData;
@property(retain, nonatomic) NSArray *rawCartDataList; // @synthesize rawCartDataList=_rawCartDataList;
@property(copy, nonatomic) CDUnknownBlockType cartDataFetchCompletionHandler; // @synthesize cartDataFetchCompletionHandler=_cartDataFetchCompletionHandler;
@property(nonatomic) _Bool showInvalidRestaurants; // @synthesize showInvalidRestaurants=_showInvalidRestaurants;
- (void).cxx_destruct;
- (void)callBackWithErrorMessage:(id)arg1 code:(long long)arg2;
- (_Bool)validateRestaurantID:(id)arg1 atIndex:(long long)arg2;
- (void)unexpandInvaildRestaurants;
- (void)expandInvaildRestaurants;
- (void)unexpandFoodsInRestaurant:(id)arg1 atIndex:(long long)arg2;
- (void)expandFoodsInRestaurant:(id)arg1 atIndex:(long long)arg2;
- (void)deleteRestaurantFoodsWithRestaurantID:(id)arg1 atIndex:(long long)arg2;
- (void)deleteCartFood:(id)arg1 inRestaurantID:(id)arg2 atIndex:(long long)arg3;
@property(readonly, nonatomic) unsigned long long invalidRestaurantsCount;
@property(readonly, nonatomic) unsigned long long validRestaurantsCount;
- (void)processDataForDisplay;
- (void)fetchCartData;

@end
