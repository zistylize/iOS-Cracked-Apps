//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GWBaseDAO : NSObject
{
}

+ (void)clearCacheByUser;
+ (_Bool)deleteAll;
+ (id)searchWithCondition:(id)arg1;
+ (void)searchWithCondition:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)createTable;
+ (id)dbManager;
+ (void)addConstraintWithProperty:(id)arg1;
+ (id)tableName;
+ (id)propertyDictionaryFromObject;
+ (id)propertyListFromObject;
+ (void)propertyContainer:(id)arg1 objectWithClassDecider:(CDUnknownBlockType)arg2;
- (_Bool)deleteModel;
- (void)deleteModelCompletion:(CDUnknownBlockType)arg1;
- (_Bool)insertModel;
- (void)insertModelCompletion:(CDUnknownBlockType)arg1;
- (_Bool)updateModelWithCondition:(id)arg1;
- (void)updateModelWithCondition:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property long long rowid;
- (id)joinedDeleteConditionColume:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)modelWithProperty:(id)arg1 value:(id)arg2;
- (id)mj_keyValuesWithKeys:(id)arg1 ignoredKeys:(id)arg2;

@end
