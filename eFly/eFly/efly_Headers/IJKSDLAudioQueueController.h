//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface IJKSDLAudioQueueController : NSObject
{
    struct OpaqueAudioQueue *_audioQueueRef;
    struct AudioQueueBuffer *_audioQueueBufferRefArray[3];
    _Bool _isPaused;
    _Bool _isStopped;
    _Bool _isAborted;
    NSLock *_lock;
    struct SDL_AudioSpec _spec;
}

@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (double)get_latency_seconds;
- (void)setPlaybackVolume:(float)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)close;
- (void)stop;
- (void)flush;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;

@end
