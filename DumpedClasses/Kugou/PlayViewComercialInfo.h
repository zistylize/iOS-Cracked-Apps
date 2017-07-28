//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PlayViewComercialInfo : NSObject
{
    int _jump_type;
    int _zhanji_id;
    int _kanchangid;
    int _kanchangziid;
    int _kanchangtypeid;
    int _duration;
    int _num;
    int _listen_type;
    int _source_id;
    int _singer_id;
    int _sing_user_id;
    int _sing_list_id;
    int _ad_type;
    int _user_page_id;
    int _music_jump_type;
    int _game_type;
    int _game_page_id;
    NSString *_renew_date;
    long long _id_num;
    NSString *_title;
    NSString *_url;
    NSString *_cd_url;
    NSString *_pic_url;
    NSString *_kanchangparams;
    NSString *_kanchangtag;
    NSString *_kanchangtypename;
    NSString *_admaster;
    NSString *_dji_admaster;
    NSString *_source_type;
    NSString *_listen_name;
    NSString *_singer_name;
    NSString *_describle;
    NSString *_sing_hash;
    NSString *_sing_name;
    NSString *_banner_thumb;
    NSString *_game_page_title;
    NSString *_cl_page_type;
    NSString *_cl_page_id;
}

@property(nonatomic) NSString *cl_page_id; // @synthesize cl_page_id=_cl_page_id;
@property(retain, nonatomic) NSString *cl_page_type; // @synthesize cl_page_type=_cl_page_type;
@property(retain, nonatomic) NSString *game_page_title; // @synthesize game_page_title=_game_page_title;
@property(nonatomic) int game_page_id; // @synthesize game_page_id=_game_page_id;
@property(nonatomic) int game_type; // @synthesize game_type=_game_type;
@property(nonatomic) int music_jump_type; // @synthesize music_jump_type=_music_jump_type;
@property(nonatomic) int user_page_id; // @synthesize user_page_id=_user_page_id;
@property(nonatomic) int ad_type; // @synthesize ad_type=_ad_type;
@property(retain, nonatomic) NSString *banner_thumb; // @synthesize banner_thumb=_banner_thumb;
@property(retain, nonatomic) NSString *sing_name; // @synthesize sing_name=_sing_name;
@property(retain, nonatomic) NSString *sing_hash; // @synthesize sing_hash=_sing_hash;
@property(retain, nonatomic) NSString *describle; // @synthesize describle=_describle;
@property(nonatomic) int sing_list_id; // @synthesize sing_list_id=_sing_list_id;
@property(nonatomic) int sing_user_id; // @synthesize sing_user_id=_sing_user_id;
@property(retain, nonatomic) NSString *singer_name; // @synthesize singer_name=_singer_name;
@property(nonatomic) int singer_id; // @synthesize singer_id=_singer_id;
@property(retain, nonatomic) NSString *listen_name; // @synthesize listen_name=_listen_name;
@property(retain, nonatomic) NSString *source_type; // @synthesize source_type=_source_type;
@property(nonatomic) int source_id; // @synthesize source_id=_source_id;
@property(nonatomic) int listen_type; // @synthesize listen_type=_listen_type;
@property(retain, nonatomic) NSString *dji_admaster; // @synthesize dji_admaster=_dji_admaster;
@property(retain, nonatomic) NSString *admaster; // @synthesize admaster=_admaster;
@property(nonatomic) int num; // @synthesize num=_num;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *kanchangtypename; // @synthesize kanchangtypename=_kanchangtypename;
@property(nonatomic) int kanchangtypeid; // @synthesize kanchangtypeid=_kanchangtypeid;
@property(retain, nonatomic) NSString *kanchangtag; // @synthesize kanchangtag=_kanchangtag;
@property(retain, nonatomic) NSString *kanchangparams; // @synthesize kanchangparams=_kanchangparams;
@property(nonatomic) int kanchangziid; // @synthesize kanchangziid=_kanchangziid;
@property(nonatomic) int kanchangid; // @synthesize kanchangid=_kanchangid;
@property(nonatomic) int zhanji_id; // @synthesize zhanji_id=_zhanji_id;
@property(retain, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(retain, nonatomic) NSString *cd_url; // @synthesize cd_url=_cd_url;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int jump_type; // @synthesize jump_type=_jump_type;
@property(nonatomic) long long id_num; // @synthesize id_num=_id_num;
@property(retain, nonatomic) NSString *renew_date; // @synthesize renew_date=_renew_date;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
