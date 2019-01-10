/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "MyLNF.h"

//==============================================================================
/**
*/
class ChowAudioProcessorEditor  : public AudioProcessorEditor,
                                  public Slider::Listener
{
public:
    ChowAudioProcessorEditor (ChowAudioProcessor&);
    ~ChowAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    AudioParameterFloat* getParamForSlider (Slider* slider);
    void sliderValueChanged (Slider* slider) override;
    void sliderDragStarted (Slider* slider) override;
    void sliderDragEnded (Slider* slider) override;

private:
    void initSliders();
    void initLabels();
    void initVisualizer();
    void initFlipButton();

    ChowAudioProcessor& processor;

    Slider threshSlide;
    Label threshLabel;

    Slider ratioSlide;
    Label ratioLabel;

    Slider inGainSlide;
    Label inGainLabel;

    Slider outGainSlide;
    Label outGainLabel;

    TextButton flipButton;
    MyLNF myLNF;

    AudioVisualiserComponent& visualizer;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ChowAudioProcessorEditor)
};
