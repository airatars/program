import yfinance as yf
import streamlit as st
import pandas as pd 

st.write("""
# Oy eeeeeeeeeeeee
Lorem dolor sit amet, consectetur adip de
""")

tickerSymbol = 'AAP'
tickerData = yf.Ticker(tickerSymbol)
tickerDf = tickerData.history(period='1d', start='2010-5-31', end='2021-3-23')

st.line_chart(tickerDf.Close)
st.line_chart(tickerDf.Volume)