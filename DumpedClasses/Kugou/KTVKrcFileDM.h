//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KrcManagerDBHelper;

@interface KTVKrcFileDM : NSObject
{
    KrcManagerDBHelper *_dbHalper;
}

+ (id)share;
@property(retain, nonatomic) KrcManagerDBHelper *dbHalper; // @synthesize dbHalper=_dbHalper;
- (void).cxx_destruct;
- (_Bool)checkDefaultRecordKrcFileOutDateForSong:(id)arg1;
- (id)getListenKrcFileGroup;
- (id)getTempKrcFileGroup;
- (id)getKrcFileGroup;
- (_Bool)isExsitKrcFileForKrcInfo:(id)arg1;
- (void)getFileForKrc:(id)arg1 forSongId:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)queryListenKrcFileForKrc:(id)arg1 outputData:(id *)arg2;
- (_Bool)saveListenKrcFileForKrc:(id)arg1 forSong:(id)arg2 isDefaut:(_Bool)arg3 withKtcData:(id)arg4;
- (void)deleteRecordKrcFileForSong:(id)arg1;
- (id)queryTempKrcFileForKrcInfo:(id)arg1;
- (id)querySelectedRecordKrcFileForSong:(id)arg1 outputKrcAdjustTime:(long long *)arg2 outputData:(id *)arg3;
- (id)queryDefaultKrcFileForSong:(id)arg1 outputKrcAdjustTime:(long long *)arg2 outputData:(id *)arg3;
- (void)queryAvailableKrcFileForKrcIdStr:(id)arg1 outputKrcAdjustTime:(long long *)arg2 outputData:(id *)arg3;
- (id)queryKrcFileForKrcInfo:(id)arg1;
- (id)getTempKrcFileDataForSong:(id)arg1 andKrcInfo:(id)arg2;
- (_Bool)saveTempKrcFileForSong:(id)arg1 andKrcInfo:(id)arg2 withKtcData:(id)arg3;
- (_Bool)saveSelectedRecordKrcFileForSong:(id)arg1 andKrcInfo:(id)arg2 withKtcData:(id)arg3;
- (_Bool)saveDefaultKrcFileForSong:(id)arg1 andKrcInfo:(id)arg2 withKtcData:(id)arg3;
- (_Bool)saveKrcFileForKrcInfo:(id)arg1 withKtcData:(id)arg2;
- (id)init;
- (id)queryAvailableRecordKrcForSong:(id)arg1 outputKrcAdjustTime:(long long *)arg2 outputData:(id *)arg3;
- (_Bool)isExsitAvailableRecordKrcForSong:(id)arg1;
- (void)queryAvailableListenKrcFileForKrc:(id)arg1 forSong:(id)arg2 outputKrcAdjustTime:(long long *)arg3 outputData:(id *)arg4;
- (_Bool)isExsitAvailableListenKrcFileForKrcInfo:(id)arg1 forSong:(id)arg2;

@end
