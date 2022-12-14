//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class AVCaptureAudioDataOutput, AVCaptureDeviceInput, GLProgram, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface TuSDKFilterProcessorBase : GPUImageOutput
{
    unsigned long long outputRotation;
    unsigned long long internalRotation;
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    _Bool captureAsYUV;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    NSDate *startingCaptureTime;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    _Bool isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool _adjustByVideoOrientation;
    _Bool _runBenchmark;
    _Bool _horizontallyMirrorFrontFacingCamera;
    _Bool _horizontallyMirrorRearFacingCamera;
    int _frameRate;
    long long _outputImageOrientation;
    long long _cameraPosition;
}

@property int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
- (void).cxx_destruct;
- (void)updateOrientationSendToTargets;
- (void)resetBenchmarkAverage;
- (double)averageFrameDurationDuringCapture;
- (void)convertYUVToRGBOutput;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)dealloc;
- (id)framebufferForOutput;
- (void)initGL;
- (id)initWithVideoDataOutput:(id)arg1;
- (id)initWithFormatType:(unsigned int)arg1 adjustByVideoOrientation:(_Bool)arg2;
- (id)init;

@end

