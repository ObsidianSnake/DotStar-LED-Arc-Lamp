void updateStrips() {
  for (int k = 0 ; k < NUMPIXELS ; k++) {    
    if ( ( k >= ((int)segment_middle - (int)segment_ss_width) ) && ( k <= ((int)segment_middle + (int)segment_ss_width)  ) )
    {      
        strip.setPixelColor(k, segment_brightness);
    }
    else
    {
      strip.setPixelColor(k, 0);
    }
  }

  strip.show();
}
