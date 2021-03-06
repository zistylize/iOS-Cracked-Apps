//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSData, NSMutableArray, NSOperationQueue;

@interface GWSystemSearchManager : GWObject
{
    NSData *_movieDefaultImage;
    NSData *_cinemaDefaultImage;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_activityList;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableArray *activityList; // @synthesize activityList=_activityList;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSData *cinemaDefaultImage; // @synthesize cinemaDefaultImage=_cinemaDefaultImage;
@property(retain, nonatomic) NSData *movieDefaultImage; // @synthesize movieDefaultImage=_movieDefaultImage;
- (void).cxx_destruct;
- (void)cleanAll;
- (void)webSaveWitchSearchModel:(id)arg1;
- (void)localSaveWithSearchModel:(id)arg1;
- (void)saveModel:(id)arg1;
- (id)init;

@end

