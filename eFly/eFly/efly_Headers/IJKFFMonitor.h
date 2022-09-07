//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IJKFFMonitor : NSObject
{
    struct SDL_SpeedSampler2 _tcpSpeedSampler;
    int _tcpError;
    int _httpError;
    int _httpCode;
    int _httpOpenCount;
    int _httpSeekCount;
    NSDictionary *_mediaMeta;
    NSDictionary *_videoMeta;
    NSDictionary *_audioMeta;
    NSString *_vdecoder;
    NSString *_remoteIp;
    NSString *_httpUrl;
    NSString *_httpHost;
    long long _httpOpenTick;
    long long _httpSeekTick;
    long long _lastHttpOpenDuration;
    long long _lastHttpSeekDuration;
    long long _filesize;
    long long _prepareStartTick;
    long long _prepareDuration;
    long long _firstVideoFrameLatency;
    long long _lastPrerollStartTick;
    long long _lastPrerollDuration;
}

@property(nonatomic) long long lastPrerollDuration; // @synthesize lastPrerollDuration=_lastPrerollDuration;
@property(nonatomic) long long lastPrerollStartTick; // @synthesize lastPrerollStartTick=_lastPrerollStartTick;
@property(nonatomic) long long firstVideoFrameLatency; // @synthesize firstVideoFrameLatency=_firstVideoFrameLatency;
@property(nonatomic) long long prepareDuration; // @synthesize prepareDuration=_prepareDuration;
@property(nonatomic) long long prepareStartTick; // @synthesize prepareStartTick=_prepareStartTick;
@property(nonatomic) long long filesize; // @synthesize filesize=_filesize;
@property(nonatomic) long long lastHttpSeekDuration; // @synthesize lastHttpSeekDuration=_lastHttpSeekDuration;
@property(nonatomic) long long lastHttpOpenDuration; // @synthesize lastHttpOpenDuration=_lastHttpOpenDuration;
@property(nonatomic) int httpSeekCount; // @synthesize httpSeekCount=_httpSeekCount;
@property(nonatomic) int httpOpenCount; // @synthesize httpOpenCount=_httpOpenCount;
@property(nonatomic) long long httpSeekTick; // @synthesize httpSeekTick=_httpSeekTick;
@property(nonatomic) long long httpOpenTick; // @synthesize httpOpenTick=_httpOpenTick;
@property(nonatomic) int httpCode; // @synthesize httpCode=_httpCode;
@property(retain, nonatomic) NSString *httpHost; // @synthesize httpHost=_httpHost;
@property(retain, nonatomic) NSString *httpUrl; // @synthesize httpUrl=_httpUrl;
@property(nonatomic) int httpError; // @synthesize httpError=_httpError;
@property(retain, nonatomic) NSString *remoteIp; // @synthesize remoteIp=_remoteIp;
@property(nonatomic) int tcpError; // @synthesize tcpError=_tcpError;
@property(retain, nonatomic) NSString *vdecoder; // @synthesize vdecoder=_vdecoder;
@property(retain, nonatomic) NSDictionary *audioMeta; // @synthesize audioMeta=_audioMeta;
@property(retain, nonatomic) NSDictionary *videoMeta; // @synthesize videoMeta=_videoMeta;
@property(retain, nonatomic) NSDictionary *mediaMeta; // @synthesize mediaMeta=_mediaMeta;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long channelLayout;
@property(readonly, nonatomic) int sampleRate;
@property(readonly, nonatomic) NSString *acodec;
@property(readonly, nonatomic) NSString *vcodec;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) long long bitrate;
@property(readonly, nonatomic) long long duration;
@property(readonly, nonatomic) float fps;
- (id)init;

@end

