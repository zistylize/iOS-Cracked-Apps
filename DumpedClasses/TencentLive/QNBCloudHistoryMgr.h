//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, QNBCHCloudGetListTask;

@interface QNBCloudHistoryMgr : NSObject
{
    NSOperationQueue *_queueCloudTasks;
    QNBCHCloudGetListTask *_getListTask;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QNBCHCloudGetListTask *getListTask; // @synthesize getListTask=_getListTask;
- (void).cxx_destruct;
- (void)notifyUserAccountChanged:(id)arg1;
- (void)qnbCloudAppTerminated:(id)arg1;
- (void)qnbCloudAppEnterForground:(id)arg1;
- (void)uploadRecordsToServer:(id)arg1;
- (void)deleteRecordsFromServer:(id)arg1 isDeleteAll:(_Bool)arg2 dataVersion:(double)arg3;
- (unsigned long long)getTotalRecordsCount;
- (void)getAllWatchRecords:(CDUnknownBlockType)arg1;
- (void)watchRecordsWithPageIndex:(long long)arg1 pageCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)watchRecordWithCid:(id)arg1 vid:(id)arg2 lid:(id)arg3 pid:(id)arg4;
- (void)deleteRecords:(id)arg1 deleteAll:(_Bool)arg2;
- (void)deleteLocalRecordsWithTransaction:(id)arg1;
- (void)addWatchRecord:(id)arg1 isLocal:(_Bool)arg2;
- (void)updateFromCloud:(CDUnknownBlockType)arg1;
- (void)postDataUpdatedNotification;
- (void)updateWithAppLaunch;
- (void)uploadLocalAndDelRecords;
- (void)clearAllLocalData:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

